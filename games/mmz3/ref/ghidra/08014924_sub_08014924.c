// sub_08014924 at 0x08014924 (thumb)

undefined4 sub_08014924(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  uVar2 = *(uint *)(param_1 + 0x5c);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_080149e2;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    (&DAT_020023c4)[(uVar2 << 0x10) >> 0x14] =
         (ushort)*(undefined4 *)(param_1 + 0x60) | (ushort)*(undefined4 *)(param_1 + 100) | 0x44;
    sub_08004340(uVar2 & 0xff,&DAT_085222a0,0x5e,0,0);
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (DAT_0202f4a4 < 10) {
    return in_lr;
  }
  piVar3 = *(int **)(param_2 + 8);
  (&DAT_020023c4)[(uVar2 & 0xffff) >> 4] = (ushort)*(undefined4 *)(param_1 + 100) | 0x4046;
  sub_08005204(param_1 + 0x14,param_1 + 0x34,
               ((ushort)(&DAT_020023c4)[*(uint *)(param_1 + 0x5c) >> 4] & 0x1f00) * 8 + 0x6000000,
               *piVar3 + (int)piVar3,piVar3[2] + (int)piVar3,
               *(undefined4 *)(param_2 + 0xc + (uint)*(ushort *)(param_1 + 0xc) * 4));
  *(undefined4 *)(param_1 + 0x40) = 0x80000001;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000001;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080149e2:
  *(int *)(param_1 + 0x4c) = DAT_0202f4bc >> 8;
  return in_lr;
}

