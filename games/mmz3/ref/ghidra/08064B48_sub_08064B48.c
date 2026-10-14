// sub_08064B48 at 0x08064B48 (thumb)

undefined4 sub_08064B48(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((1 < *(byte *)(param_1 + 0xd)) && (*(byte *)(param_1 + 0xd) != 0xc)) {
    sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    if (sVar1 == 0) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1000;
      uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54));
      *(undefined4 *)(param_1 + 0x58) = uVar2;
    }
  }
  return in_lr;
}

