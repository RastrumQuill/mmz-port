// sub_08055728 at 0x08055728 (thumb)

undefined4 sub_08055728(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080032EC(0x98);
    sub_08006E08(param_1 + 0x74,&DAT_0833c3a8);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  puVar2 = (ushort *)(param_1 + 0x50);
  uVar1 = *puVar2 - 1;
  if (uVar1 < 0x156) {
    *puVar2 = 0x155;
    *(undefined2 *)(param_1 + 0x52) = 0x155;
    *(char *)(param_1 + 0xb5) = *(char *)(param_1 + 0xb5) + '\x01';
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    *puVar2 = uVar1;
    *(ushort *)(param_1 + 0x52) = uVar1;
  }
  return in_lr;
}

