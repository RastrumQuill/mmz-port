// sub_0801DA44 at 0x0801DA44 (thumb)

undefined4 sub_0801DA44(void)

{
  int iVar1;
  wchar16 *pwVar2;
  undefined4 in_lr;
  
  if ((DAT_0202ebb4 & 1) == 0) {
    iVar1 = 0;
    pwVar2 = L"BCDEFGHIJK";
    do {
      if (DAT_0202ec30 == (byte)(&DAT_08333370)[iVar1]) {
        if (*(byte *)(DAT_0202ebf0 + 1) < 5) {
          return in_lr;
        }
        (&DAT_0202ebb4)[(ushort)*pwVar2 >> 3] =
             (byte)(1 << ((ushort)*pwVar2 & 7)) | (&DAT_0202ebb4)[(ushort)*pwVar2 >> 3];
        return in_lr;
      }
      pwVar2 = pwVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 10);
  }
  return in_lr;
}

