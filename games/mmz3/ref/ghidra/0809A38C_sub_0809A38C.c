// sub_0809A38C at 0x0809A38C (thumb)

undefined4 sub_0809A38C(int param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 0x31) == '\0') {
    if (*(char *)(param_1 + 0xe) == '\0') {
      *(undefined *)(param_1 + 0x25) = 0x19;
      uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar3 & 0x7fffffff;
      iVar4 = (-0x80 - (uVar3 * 2 >> 0x11 & 0x7f)) * ((*(byte *)(param_1 + 0x12) ^ 1) * -2 + 1);
      *(int *)(param_1 + 0x5c) = iVar4;
      bVar1 = 0 < iVar4;
      if (bVar1) {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(bool *)(param_1 + 0x4c) = bVar1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
      sub_08017700(param_1,0xf200);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar4;
    if (0x13000 < iVar4 - 0xd000U) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
    sub_080177F4(param_1);
  }
  return in_lr;
}

