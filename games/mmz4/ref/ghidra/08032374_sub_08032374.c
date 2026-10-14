// sub_08032374 at 0x08032374 (thumb)

undefined4 sub_08032374(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  short *psVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_08128884(param_1,*(undefined4 *)(&DAT_0884fa80 + (uint)*(byte *)(param_1 + 0xf) * 4));
  psVar3 = (short *)(param_1 + 0x138);
  if (*psVar3 != 0) {
    *psVar3 = *psVar3 + -1;
  }
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*psVar3 == 0)) {
    if (*(char *)(param_1 + 0xf) == '\x02') {
      sub_0801CFC8(param_1,0x404,2,1);
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 2;
      *(undefined *)(param_1 + 0xf) = 1;
      iVar4 = *(int *)(param_1 + 0x5c);
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      sVar1 = sub_080386E0(param_1);
      if (sVar1 <= iVar4) {
        iVar4 = *(int *)(param_1 + 0x5c);
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        if (iVar4 < 0x381) {
          return in_lr;
        }
      }
      sVar1 = sub_080386E0(param_1);
      *(int *)(param_1 + 0x5c) = (int)sVar1;
    }
    else {
      uVar2 = sub_0802B7C0(param_1);
      sub_0801CF00(param_1,uVar2);
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 1;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
  return in_lr;
}

