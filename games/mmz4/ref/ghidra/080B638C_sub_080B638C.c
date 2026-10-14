// sub_080B638C at 0x080B638C (thumb)

undefined4 sub_080B638C(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  byte abStack_28 [4];
  int local_24 [4];
  
  local_24[0] = 0xb301;
  local_24[1] = 0xb307;
  sub_08128B5C(abStack_28,&DAT_0812976c,2);
  iVar3 = *(int *)(param_1 + 0x28);
  uVar2 = (uint)*(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x19b);
    sub_08005784(param_1 + 0x74,&DAT_0886066c + (uint)abStack_28[uVar2] * 0x18);
    sub_0801CF00(param_1,*(undefined2 *)(local_24 + uVar2));
    if (uVar2 == 1) {
      local_24[2] = *(int *)(DAT_0202dbf0 + 0x54);
      local_24[3] = *(int *)(DAT_0202dbf0 + 0x58) + -0x1800;
    }
    else {
      local_24[2] = *(int *)(iVar3 + 0xb4) + 0x7800;
      local_24[3] = *(int *)(iVar3 + 0xb8) + 0x4800;
    }
    uVar2 = sub_0810CD64(param_1 + 0x54,local_24 + 2);
    iVar3 = *(short *)((int)&DAT_08128c10 + (((uVar2 & 0xff) + 0x40) * 0x1000000 >> 0x17)) * 0x380;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
    iVar3 = (short)(&DAT_08128c10)[uVar2 & 0xff] * 0x380;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar3 >> 8;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  local_24[2] = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = local_24[2];
  local_24[3] = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = local_24[3];
  local_24[3] = local_24[3] + 0x400;
  sVar1 = sub_08007C7C(local_24[2]);
  if (sVar1 == 0) {
    uVar2 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
    if (0x2000 < uVar2) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_080B6528(param_1);
  }
  return in_lr;
}

