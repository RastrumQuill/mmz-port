// sub_080032AC at 0x080032AC (thumb)

undefined8 sub_080032AC(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  uVar1 = (uint)(param_1 << 0x10) >> 0xd;
  piVar3 = (int *)(&DAT_0810097c)[(uint)*(ushort *)(&DAT_08100a28 + uVar1) * 3];
  if (((*piVar3 == *(int *)(&DAT_08100a24 + uVar1)) && (*(short *)(piVar3 + 1) != 0)) &&
     (-1 < piVar3[1])) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

