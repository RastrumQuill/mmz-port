// sub_08008814 at 0x08008814 (thumb)

undefined4 sub_08008814(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  iVar1 = param_1 + 0x14;
  local_20 = (*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x34) >> 8) + *(int *)(param_1 + 0x4c);
  local_1c = (*(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x38) >> 8) + *(int *)(param_1 + 0x50);
  uVar2 = (local_20 -
          ((*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x3c) >> 8) + *(int *)(param_1 + 0x54))) +
          0xf;
  uVar3 = (local_1c -
          ((*(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x40) >> 8) + *(int *)(param_1 + 0x58))) +
          0xf;
  local_20 = (*(int *)(param_1 + 0x2c) >> 8) + local_20;
  local_1c = (*(int *)(param_1 + 0x30) >> 8) + local_1c;
  if (*(short *)(param_1 + 0xc) == 0) {
    if (((uVar2 < 0x1f) && (uVar3 < 0x1f)) && (DAT_0202d000 == 0)) {
      sub_080067A8(iVar1,&local_20,&DAT_0202d01c,&DAT_020017e0);
    }
    else {
      sub_08006604(iVar1,&local_20,&DAT_0202d01c,&DAT_020017e0);
    }
    DAT_0202d000 = 0;
  }
  else if ((uVar2 < 0x1f) && (uVar3 < 0x1f)) {
    sub_08004CA4(iVar1,&local_20,
                 ((ushort)(&DAT_02000f94)[*(uint *)(param_1 + 0x5c) >> 4] & 0x1f00) * 8 + 0x6000000)
    ;
  }
  else {
    sub_08005664(iVar1,&local_20,
                 ((ushort)(&DAT_02000f94)[*(uint *)(param_1 + 0x5c) >> 4] & 0x1f00) * 8 + 0x6000000)
    ;
  }
  sub_080069A0(iVar1,&DAT_02000f9c + (*(uint *)(param_1 + 0x5c) >> 4));
  return in_lr;
}

