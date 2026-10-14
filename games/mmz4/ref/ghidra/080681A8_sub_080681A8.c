// sub_080681A8 at 0x080681A8 (thumb)

undefined4 sub_080681A8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa92b);
    sub_08005784(param_1 + 0x74,&DAT_08857fd8);
    local_18 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = local_18 + -0x1c00;
    local_1c = *(int *)(param_1 + 0x54) + -0x1300;
    local_18 = local_18 + 0xb00;
    uVar1 = sub_0809CA78(param_1,&local_1c,1,1);
    *(undefined4 *)(param_1 + 0xd4) = uVar1;
    local_1c = *(int *)(param_1 + 0x54) + 0x1300;
    local_18 = *(int *)(param_1 + 0x58) + 0x2700;
    sub_0809CA78(param_1,&local_1c,1,0);
    local_1c = *(int *)(param_1 + 0x54) + -0x2600;
    local_18 = *(int *)(param_1 + 0x58) + -0x400;
    uVar1 = sub_0809CA78(param_1,&local_1c,0,1);
    *(undefined4 *)(param_1 + 0xd0) = uVar1;
    local_1c = *(int *)(param_1 + 0x54) + 0x2500;
    local_18 = *(int *)(param_1 + 0x58) + -0x400;
    sub_0809CA78(param_1,&local_1c,0,0);
    sub_08002B10(0x66);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (6 < *(byte *)(*(int *)(param_1 + 0xd0) + 0xd)) {
    *(undefined *)(param_1 + 0xd) = 0x1e;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

