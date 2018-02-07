﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies a JSON classifier for <code>CreateClassifier</code> to
   * create.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateJsonClassifierRequest">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API CreateJsonClassifierRequest
  {
  public:
    CreateJsonClassifierRequest();
    CreateJsonClassifierRequest(const Aws::Utils::Json::JsonValue& jsonValue);
    CreateJsonClassifierRequest& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the classifier.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the classifier.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the classifier.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the classifier.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the classifier.</p>
     */
    inline CreateJsonClassifierRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the classifier.</p>
     */
    inline CreateJsonClassifierRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the classifier.</p>
     */
    inline CreateJsonClassifierRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A <code>JsonPath</code> string defining the JSON data for the classifier to
     * classify. AWS Glue supports a subset of JsonPath, as described in <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/custom-classifier.html#custom-classifier-json">Writing
     * JsonPath Custom Classifiers</a>.</p>
     */
    inline const Aws::String& GetJsonPath() const{ return m_jsonPath; }

    /**
     * <p>A <code>JsonPath</code> string defining the JSON data for the classifier to
     * classify. AWS Glue supports a subset of JsonPath, as described in <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/custom-classifier.html#custom-classifier-json">Writing
     * JsonPath Custom Classifiers</a>.</p>
     */
    inline void SetJsonPath(const Aws::String& value) { m_jsonPathHasBeenSet = true; m_jsonPath = value; }

    /**
     * <p>A <code>JsonPath</code> string defining the JSON data for the classifier to
     * classify. AWS Glue supports a subset of JsonPath, as described in <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/custom-classifier.html#custom-classifier-json">Writing
     * JsonPath Custom Classifiers</a>.</p>
     */
    inline void SetJsonPath(Aws::String&& value) { m_jsonPathHasBeenSet = true; m_jsonPath = std::move(value); }

    /**
     * <p>A <code>JsonPath</code> string defining the JSON data for the classifier to
     * classify. AWS Glue supports a subset of JsonPath, as described in <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/custom-classifier.html#custom-classifier-json">Writing
     * JsonPath Custom Classifiers</a>.</p>
     */
    inline void SetJsonPath(const char* value) { m_jsonPathHasBeenSet = true; m_jsonPath.assign(value); }

    /**
     * <p>A <code>JsonPath</code> string defining the JSON data for the classifier to
     * classify. AWS Glue supports a subset of JsonPath, as described in <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/custom-classifier.html#custom-classifier-json">Writing
     * JsonPath Custom Classifiers</a>.</p>
     */
    inline CreateJsonClassifierRequest& WithJsonPath(const Aws::String& value) { SetJsonPath(value); return *this;}

    /**
     * <p>A <code>JsonPath</code> string defining the JSON data for the classifier to
     * classify. AWS Glue supports a subset of JsonPath, as described in <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/custom-classifier.html#custom-classifier-json">Writing
     * JsonPath Custom Classifiers</a>.</p>
     */
    inline CreateJsonClassifierRequest& WithJsonPath(Aws::String&& value) { SetJsonPath(std::move(value)); return *this;}

    /**
     * <p>A <code>JsonPath</code> string defining the JSON data for the classifier to
     * classify. AWS Glue supports a subset of JsonPath, as described in <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/custom-classifier.html#custom-classifier-json">Writing
     * JsonPath Custom Classifiers</a>.</p>
     */
    inline CreateJsonClassifierRequest& WithJsonPath(const char* value) { SetJsonPath(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_jsonPath;
    bool m_jsonPathHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
