// sub_080DC360 at 0x080DC360 (thumb)

undefined4 sub_080DC360(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x10);
  sVar1 = sub_080EF150((int)**(short **)(param_1 + 0x2c),5);
  if ((int)sVar1 == uVar2 + 2) {
    uVar2 = (uVar2 * 2 + 1) * 0x1000000;
  }
  else {
    uVar2 = uVar2 << 0x19;
  }
  if ((uint)*(byte *)(param_1 + 0x11) != uVar2 >> 0x18) {
    *(char *)(param_1 + 0x11) = (char)(uVar2 >> 0x18);
    sub_080127E4(param_1,*(undefined2 *)(&DAT_0834bdec + (uint)*(byte *)(param_1 + 0x11) * 2));
  }
  sub_080128D4(param_1);
  return in_lr;
}

