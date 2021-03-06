/**
 * Copyright 2013-2015 KryptoLogik.com
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHORS ''AS IS'' AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHORS OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Generated by: KryptoPlus 1.3.0-136
 *
 */

#ifndef _kplus_fde_abc_decrypt_h__
#define _kplus_fde_abc_decrypt_h__
#ifdef __cplusplus
extern "C" {
#endif

#define d_abc_keyName  "abc"
#define d_abc_keyId    0x0ECE8E7C
#define d_abc_keyAttr  0x010302D2
#define d_abc_packSize 16
#define d_abc_radix    10

extern int kplus_fde_abc_pack(
    const char *data_in,
    unsigned char *data_out );

extern char *kplus_fde_abc_unpack(
    const unsigned char *data_in,
    const char *tmpl,
    char *data_out );

extern void kplus_fde_abc_decrypt_packed(
    const unsigned char *data_in,
    unsigned char *data_out );

extern char *kplus_fde_abc_decrypt(
    const char *data_in,
    char *data_out );

#ifdef __cplusplus
}
#endif
#endif
