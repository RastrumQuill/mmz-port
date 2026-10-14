// sub_0805C854 at 0x0805C854 (thumb)

undefined4 sub_0805C854(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_08048B48();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,0);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
  *(undefined *)(param_1 + 0x1f) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  uVar1 = 0;
  do {
    sub_08087934(param_1,(uVar1 << 0x1d) >> 0x18);
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0805C8F4(param_1);
  return in_lr;
}

