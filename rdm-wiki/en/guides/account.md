# The Portal Account

The account for the web portal is linked to your institutional account. For researchers at the Radboud University it is the u-number, for researchers from the UMCN it is the z-number.

# The Webdav Account

Accessing the data is not done through the web portal, but through a [WebDav interface](webdav.md) client. The data-access account consists of a _username_ and a _password_.

For a registered RDM user, the _username_ part of the data-access account is a fixed value.  It is a string combining the user's id and home organisation provided by the identity provider (IdP) through which the user signed in/up to the CMS portal.

The _password_ part is the so-called [One-time password](https://en.wikipedia.org/wiki/HMAC-based_One-time_Password_Algorithm).  It is generated dynamically on the fly, and can only be used once for user authentication in initialising a data-access session.  

## Retrieve the Webdav account

After [logging to the web portal](user_login.md), the data-access account may be retrieved following the instructions below:

1. Click on your display name at the top-right corner of the web portal to toggle a pull-down manual, and select the item `Data Access Password`:

  ![](screenshots/cms_get_hotp.png)

2. Informaton of a valid data-access account (the _username_ and the _one-time password_) is displayed on the overlay page. You may copy the information and use it in the [data-access client](webdav.md).

  Warning: for security reason, close the overlay page as soon as you have copied the account information.

  ![](screenshots/cms_show_hotp.png)

3. One can always retrieve again the account information (with a new _one-time password_ if the previous one has been used) by repeating Step 1.
