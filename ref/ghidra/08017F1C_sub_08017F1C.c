// sub_08017F1C at 0x08017F1C (thumb)

undefined8 sub_08017F1C(int param_1)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  bVar1 = sub_0801B390();
  if ((char)bVar1 < '\0') {
LAB_08017fce:
    uVar3 = 0;
  }
  else {
    if (bVar1 == 0) {
      pcVar2 = (char *)(param_1 + 0xbf);
      if (*pcVar2 != '\0') {
        if ((*(byte *)(param_1 + 0x188) & 2) == 0) {
          if (*(byte *)(param_1 + 0x124) < 3) goto LAB_08017f60;
        }
        else if (*(byte *)(param_1 + 0x124) < *(byte *)(param_1 + 0x199)) {
LAB_08017f60:
          if (*(short *)(DAT_02022e90 + 10) != 0) {
            *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
            *(undefined *)(param_1 + 0xbe) = 3;
            *(char *)(param_1 + 0xc2) = *pcVar2;
            *pcVar2 = '\0';
            goto LAB_08017fbe;
          }
        }
      }
    }
    else {
      pbVar4 = (byte *)(param_1 + 0xbf);
      if (*pbVar4 < 3) goto LAB_08017fce;
      *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
      *(undefined *)(param_1 + 0xbe) = 3;
      *(byte *)(param_1 + 0xc2) = *pbVar4;
      *pbVar4 = 0;
LAB_08017fbe:
      *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
      *(undefined *)(param_1 + 0xc0) = 0;
    }
    uVar3 = (uint)bVar1;
  }
  return CONCAT44(in_lr,uVar3);
}

