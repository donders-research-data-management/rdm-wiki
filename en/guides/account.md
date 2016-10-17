# The Web Portal Account

The account for the web portal is the same as your institutional account. For researchers at the Radboud University it is the u-number, for researchers from the UMCN it is the z-number.

# The Webdav Account

The data is not accessed through the web interface, but through a [WebDav interface](webdav.md) client. This requires a WebDav client, such as [Cyberduck](cyberduck.io), and a data-access username and password.

Your WebDav account is created during registering on the RDM portal. The WebDav _user name_ is a combination of the user-id and the home organisation. These are both provided by the identity provider (IdP) through you signed up.

The WebDav _password_ is a [One-time password](https://en.wikipedia.org/wiki/HMAC-based_One-time_Password_Algorithm).  It is generated dynamically on the fly, and can only be used once for initialising a data-access session.  

## Retrieve the Webdav user name and password

After [logging to the web portal](user_login.md), you should:

1. Click on your display name at the top-right corner of the web portal to toggle a pull-down manual, and select the item `Data Access Password`:

  ![](screenshots/cms_get_hotp.png)

2. Informaton of a valid data-access account (the _username_ and the _one-time password_) is displayed on the overlay page. You may copy the information and use it in the [data-access client](webdav.md).

  Warning: for security you should close the overlay page as soon as you have copied the account information.

  ![](screenshots/cms_show_hotp.png)

3. One can always retrieve again the account information (with a new _one-time password_ if the previous one has been used) by repeating Step 1.
