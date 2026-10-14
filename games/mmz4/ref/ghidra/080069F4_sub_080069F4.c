// sub_080069F4 at 0x080069F4 (thumb)

undefined4 sub_080069F4(uint param_1)

{
  undefined2 *puVar1;
  undefined4 in_lr;
  
  puVar1 = (undefined2 *)((int)&DAT_08128c10 + (((param_1 & 0xffff) + 0x18) * 0x1000000 >> 0x17));
  if ((&DAT_02000990)[param_1 & 0xffff] != *(char *)puVar1) {
    (&DAT_02000990)[param_1 & 0xffff] = (char)*puVar1;
    DAT_02000aa8 = 1;
  }
  return in_lr;
}

