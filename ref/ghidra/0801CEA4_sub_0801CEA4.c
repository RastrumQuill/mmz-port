// sub_0801CEA4 at 0x0801CEA4 (thumb)

undefined8 sub_0801CEA4(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = 0x4e;
  while( true ) {
    uVar1 = uVar3;
    if ((int)uVar3 < 0) {
      uVar1 = uVar3 + 7;
    }
    iVar2 = (int)uVar1 >> 3;
    uVar1 = uVar3 + iVar2 * -8;
    if (((((int)(uint)*(byte *)(param_1 + 0x2c + iVar2) >> (uVar1 & 0xff) & 1U) == 0) ||
        (((int)(uint)*(byte *)(param_1 + 0x36 + iVar2) >> (uVar1 & 0xff) & 1U) != 0)) ||
       (iVar2 = sub_080B47F0(param_1 + 0x2c,uVar3 & 0xff), iVar2 * 0x1000000 < 1)) break;
    uVar3 = uVar3 - 1;
    if ((int)uVar3 < 1) {
      uVar3 = (uint)(*(char *)(param_1 + 0x89) == 'N');
LAB_0801cf02:
      return CONCAT44(in_lr,uVar3);
    }
  }
  uVar3 = 0;
  goto LAB_0801cf02;
}

