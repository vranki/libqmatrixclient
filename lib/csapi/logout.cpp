/******************************************************************************
 * THIS FILE IS GENERATED - ANY EDITS WILL BE OVERWRITTEN
 */

#include "logout.h"

#include "converters.h"

#include <QtCore/QStringBuilder>

using namespace QMatrixClient;

static const auto basePath = QStringLiteral("/_matrix/client/r0");

QUrl LogoutJob::makeRequestUrl(QUrl baseUrl)
{
    return BaseJob::makeRequestUrl(std::move(baseUrl),
            basePath % "/logout");
}

static const auto LogoutJobName = QStringLiteral("LogoutJob");

LogoutJob::LogoutJob()
    : BaseJob(HttpVerb::Post, LogoutJobName,
        basePath % "/logout")
{
}

QUrl LogoutAllJob::makeRequestUrl(QUrl baseUrl)
{
    return BaseJob::makeRequestUrl(std::move(baseUrl),
            basePath % "/logout/all");
}

static const auto LogoutAllJobName = QStringLiteral("LogoutAllJob");

LogoutAllJob::LogoutAllJob()
    : BaseJob(HttpVerb::Post, LogoutAllJobName,
        basePath % "/logout/all")
{
}

