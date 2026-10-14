// sub_08036E60 at 0x08036E60 (thumb)

undefined4 sub_08036E60(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  sub_0800561C(param_1 + 0x74,&DAT_082ad7fc);
  *(undefined2 *)(param_1 + 0xe) = 1;
  sub_08038A5C(param_1,1);
  bVar1 = sub_08038AD8(param_1);
  *(byte *)(param_1 + 0x44) = bVar1;
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(uint *)(param_1 + 0x54) = ((uint)bVar1 * 2 + -1) * 0x3c0;
  sub_0808D634(param_1 + 0x4c,*(byte *)(param_1 + 10) >> 4 & 1,0x200);
  *(undefined *)(param_1 + 0x13) = 3;
  sub_08036ED0(param_1);
  return in_lr;
}

