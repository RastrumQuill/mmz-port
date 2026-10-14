// sub_0808F0A0 at 0x0808F0A0 (thumb)

undefined4 sub_0808F0A0(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  undefined2 auStack_50 [22];
  undefined auStack_24 [4];
  undefined2 auStack_20 [10];
  
  sub_080C8D70(auStack_24,&DAT_080c9408,3);
  sub_080C8D70(auStack_20,&DAT_080c940c,0x12);
  uVar1 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)uVar1;
  *(undefined2 *)(param_1 + 0x48) =
       *(undefined2 *)((int)auStack_20 + (uVar1 & 0xfe) + (*(byte *)(param_1 + 0x10) - 8) * 6);
  *(undefined2 *)(param_1 + 0x4a) =
       auStack_20[(*(byte *)(param_1 + 0x10) - 8) * 3 + (uint)(*(byte *)(param_1 + 0x12) >> 1)];
  *(undefined *)(param_1 + 0x1f) = auStack_24[(uint)*(byte *)(param_1 + 0x12) * 0x1000000 >> 0x19];
  if (*(byte *)(param_1 + 0x12) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

