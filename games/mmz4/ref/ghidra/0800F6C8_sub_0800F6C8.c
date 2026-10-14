// sub_0800F6C8 at 0x0800F6C8 (thumb)

undefined4 sub_0800F6C8(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined2 *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  puVar2 = (ushort *)(param_1 + 0x68);
  sub_080074C0(2,0x13,(&DAT_0882cc04)[*puVar2 >> 3]);
  sub_080074C0(4,0x13,(&DAT_0882cc24)[*puVar2 >> 3]);
  uVar1 = *puVar2;
  *puVar2 = uVar1 + 1;
  if ((ushort)(uVar1 + 1) == 0x100) {
    *puVar2 = 0;
  }
  return in_lr;
}

