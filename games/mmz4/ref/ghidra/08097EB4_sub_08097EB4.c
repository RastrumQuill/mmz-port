// sub_08097EB4 at 0x08097EB4 (thumb)

undefined4 sub_08097EB4(int param_1)

{
  char cVar1;
  short sVar2;
  byte *pbVar3;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x8603);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == -1) || (sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54)), sVar2 != 0)) {
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(undefined4 *)(param_1 + 0x58);
    pbVar3 = (byte *)(param_1 + 0xbc);
    sub_080D4898(&local_18,&DAT_0885d5c0,0,*pbVar3);
    sub_080D4898(&local_18,&DAT_0885d5c0,0,*pbVar3 | 0x10);
    sub_080D4898(&local_18,&DAT_0885d5dc,0,*pbVar3);
    sub_080D4898(&local_18,&DAT_0885d5f8,0,*pbVar3);
    sub_080D0894(1,&local_18);
    sub_08002B10(0x2a);
    sub_0802AB70(2,0x27,param_1 + 0x54);
    if (DAT_0202e8ec < 9999) {
      DAT_0202e8ec = DAT_0202e8ec + 1;
    }
    sub_0802ABC8(param_1,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

