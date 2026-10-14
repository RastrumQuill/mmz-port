// sub_080A416C at 0x080A416C (thumb)

undefined4 sub_080A416C(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_080B17FC(*(int *)(param_1 + 0x4c) + 0xa000,*(undefined4 *)(param_1 + 0x50),0,param_1);
    uVar1 = sub_080B17FC(*(int *)(param_1 + 0x4c) + 0xa000,*(undefined4 *)(param_1 + 0x50),1,param_1
                        );
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_0809C980(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (0x20 < *(byte *)(*(int *)(param_1 + 0x24) + 0x12)) {
      sub_0809C930(param_1,0);
      sub_0809C980(param_1);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    uVar2 = *(byte *)(param_1 + 0x12) + 1;
    *(char *)(param_1 + 0x12) = (char)uVar2;
    iVar3 = (uVar2 & 7) * -0x10 + 0x140;
    *(int *)(param_1 + 0x54) = iVar3;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar3;
  }
  return in_lr;
}

