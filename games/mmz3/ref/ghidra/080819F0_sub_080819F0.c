// sub_080819F0 at 0x080819F0 (thumb)

undefined4 sub_080819F0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0x49);
    *(undefined *)(param_1 + 0x25) = 0xe;
    sub_08017700(param_1,0x5000);
    iVar2 = sub_08017B8C(param_1);
    sub_080040A8(0x55,(uint)(iVar2 << 0x18) >> 0x13 | 0x200);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) + 1;
  sub_080041E4(0x55);
  sub_080177F4(param_1);
  if (((*(uint *)(iVar3 + 0xb4) & 0x20) == 0) || (1 < *(byte *)(iVar3 + 0xc))) {
    sub_08004230(0x55);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

