/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2017 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or imlied.
// See the License for the specific language governing permissions and
// limitations under the License.
/////////////////////////////////////////////////////////////////////////////////////////////

#include "StatsCollector.h"

////////////////////////////////////////////////////////////////////////////////////
// METRIC
////////////////////////////////////////////////////////////////////////////////////
Metric::Metric() {}
Metric::Metric(std::string metricName) : mMetricName(metricName) {}


double Metric::GetCurrentValue()
{
	return mCurrentValue;
}

void Metric::SetCurrentValue(double currentValue)
{
	mCurrentValue = currentValue;
}



void InfoCollector::ConstructMetricDataStructure() {	
	mMetricsVec.resize(CPU_PREDEFINED_COUNT);

	mMetricsVec[RSS_MEMORY_SIZE] = std::unique_ptr<Metric>(new Metric("App Comitted Memory"));
	mMetricsVec[AVAILABLE_MEMORY] = std::unique_ptr<Metric>(new Metric("Total Available Memory"));
	mMetricsVec[CPU_FREQ] = std::unique_ptr<Metric>(new Metric("Current CPU Frequency"));
	mMetricsVec[CPU_PERCENT_MAX_FREQ_PER_CORE] = std::unique_ptr<Metric>(new Metric("Percentage of maximum Frequency"));
}


unsigned int InfoCollector::GetLogicalCoreCount() {
	return mCPUCoresNumber;
}

unsigned int InfoCollector::GetPhysicalCoreCount() {
	return mCPUPhysicalCoresNumber;
}

std::unique_ptr<Metric>* InfoCollector::GetMetric(METRIC varMetric) {
	return &(mMetricsVec[varMetric]);
}

double InfoCollector::CollectDataForMetric(METRIC metric) {
	return mMetricsVec[metric]->GetCurrentValue();
}