// sub_0802BDDC at 0x0802BDDC (thumb)

undefined4 sub_0802BDDC(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x124) & 1;
  if ((*(byte *)(param_1 + 0x124) & 1) == 0) {
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x705) {
      sub_08017700(param_1,0x705);
      *(uint *)(param_1 + 0x58) = (*(uint *)(param_1 + 0x58) & 0xfffff000) + 0xfff;
      sub_08025EC4(param_1,&DAT_0835b034 + (uint)*(byte *)(param_1 + 0x147) * 8,1);
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(byte *)(param_1 + 0xd) = bVar1;
      *(byte *)(param_1 + 0xe) = bVar1;
      *(byte *)(param_1 + 0xf) = bVar1;
    }
  }
  return in_lr;
}

