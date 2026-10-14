// sub_08093D60 at 0x08093D60 (thumb)

undefined4 sub_08093D60(int param_1)

{
  undefined uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar1 = *(undefined *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885d058);
    sub_0801CF00(param_1,0x4000);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_080947EC(param_1);
  uVar3 = (uint)DAT_0202daef;
  uVar2 = sub_08128A24(uVar1,3);
  if (((int)uVar3 >> (uVar2 & 0xff) & 1U) != 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

