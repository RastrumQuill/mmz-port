// sub_08029114 at 0x08029114 (thumb)

undefined8 sub_08029114(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xc);
  bVar1 = *(byte *)(iVar3 + 1);
  if (bVar1 == 1) {
    (&DAT_0202dad4)[*(short *)(iVar3 + 2)] = (char)*(undefined4 *)(iVar3 + 4);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      sub_08006E94();
      sub_08006A94((int)*(short *)(*(int *)(param_1 + 0xc) + 2),&DAT_02000c78);
    }
  }
  else if (bVar1 == 2) {
    if ((uint)(byte)(&DAT_0202dad4)[*(short *)(iVar3 + 2)] != *(uint *)(iVar3 + 4)) {
      *(int *)(param_1 + 0xc) = iVar3 + -8;
    }
    uVar2 = 1;
    goto LAB_0802918e;
  }
  uVar2 = 0;
LAB_0802918e:
  return CONCAT44(in_lr,uVar2);
}

