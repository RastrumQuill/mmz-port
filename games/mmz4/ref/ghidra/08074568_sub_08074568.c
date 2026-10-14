// sub_08074568 at 0x08074568 (thumb)

undefined4 sub_08074568(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  sub_0801CFF0();
  pbVar4 = (byte *)(param_1 + 0xe0);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (short)(&DAT_08128c10)[*pbVar4] * 4;
  *pbVar4 = *pbVar4 + 1;
  *(short *)(param_1 + 0xc4) = *(short *)(param_1 + 200) + *(short *)(param_1 + 0xc4);
  *(short *)(param_1 + 0xc6) = *(short *)(param_1 + 0xca) + *(short *)(param_1 + 0xc6);
  if ((DAT_0202e918 & 8) == 0) {
    do {
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      if ((uVar3 * 2 >> 0x11 & 1) == 0) {
        uVar2 = 4;
      }
      else {
        uVar2 = 5;
      }
      *(undefined *)(param_1 + 0xd) = uVar2;
      cVar1 = *(char *)(param_1 + 0xde);
    } while ((cVar1 == *(char *)(param_1 + 0xd)) && (*(char *)(param_1 + 0xdf) == cVar1));
    *(char *)(param_1 + 0xdf) = cVar1;
    *(char *)(param_1 + 0xde) = *(char *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

