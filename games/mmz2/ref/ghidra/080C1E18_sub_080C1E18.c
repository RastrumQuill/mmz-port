// sub_080C1E18 at 0x080C1E18 (thumb)

undefined4 sub_080C1E18(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  sub_080128D4();
  puVar2 = (ushort *)(param_1 + 0xc0);
  uVar1 = *puVar2;
  *puVar2 = uVar1 + 0x10;
  *(ushort *)(param_1 + 0x50) = uVar1 + 0x10;
  *(ushort *)(param_1 + 0x52) = *puVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x100;
  if (0xff < *puVar2) {
    sub_08012580(param_1);
    sub_080127E4(param_1,0x1a01);
    sub_080128D4(param_1);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

