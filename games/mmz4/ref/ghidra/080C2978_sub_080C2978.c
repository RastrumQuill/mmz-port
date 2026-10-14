// sub_080C2978 at 0x080C2978 (thumb)

undefined4 sub_080C2978(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  byte abStack_2c [4];
  undefined4 local_28 [2];
  
  local_28[0] = 0x4801;
  local_28[1] = 0x4901;
  sub_08128B5C(abStack_2c,&DAT_08129a50,2);
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0xa6);
    for (iVar3 = 0; iVar3 < (int)(uint)abStack_2c[uVar4]; iVar3 = iVar3 + 1) {
      uVar1 = FUN_081288bc(iVar3 << 8);
      iVar2 = sub_080C25A8(param_1,param_1 + 0x54,uVar4,uVar1);
      if (iVar2 == 0) break;
      *(char *)(param_1 + 0xb5) = *(char *)(param_1 + 0xb5) + '\x01';
    }
    sub_0801CF00(param_1,*(undefined2 *)(local_28 + uVar4));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

