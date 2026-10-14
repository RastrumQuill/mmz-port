// sub_0802B870 at 0x0802B870 (thumb)

undefined4 sub_0802B870(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x147) = 2;
  uVar3 = sub_080265DC(param_1,&DAT_0835b044,0);
  if ((uVar3 & 0x10) == 0) {
    if ((*(uint *)(param_1 + 0x218) & 0x10) != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x100;
    }
    if ((*(uint *)(param_1 + 0x218) & 0x20) != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x100;
    }
    sub_08025C04(param_1,&DAT_0835b034 + (uint)*(byte *)(param_1 + 0x147) * 8,0);
    sVar2 = sub_08032C04(param_1);
    iVar4 = (int)sVar2;
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    if (iVar4 == 0) {
      *(char *)(param_1 + 0xf8) = (char)sVar2;
      if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == 0x500) &&
         ('\x03' < *(char *)(param_1 + 0x71))) {
        sub_080177CC(param_1,0x500,5,2);
      }
    }
    else {
      pcVar5 = (char *)(param_1 + 0xf8);
      cVar1 = *pcVar5;
      *pcVar5 = cVar1 + -1;
      if ((char)(cVar1 + -1) == -1) {
        *pcVar5 = '\x04';
        sub_080B339C(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1);
        sub_0800471C(9);
      }
    }
    sVar2 = sub_08025EC4(param_1,&DAT_0835b034 + (uint)*(byte *)(param_1 + 0x147) * 8,1);
    if ((sVar2 != 0) &&
       (sVar2 = sub_08026664(param_1,&DAT_0835b034 + (uint)*(byte *)(param_1 + 0x147) * 8,0),
       sVar2 != 0)) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      sub_0800471C(7);
    }
  }
  else {
    sub_08032F58(param_1);
    sub_0802BE54(param_1);
  }
  return in_lr;
}

