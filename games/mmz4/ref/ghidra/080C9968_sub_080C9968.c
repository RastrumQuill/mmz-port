// sub_080C9968 at 0x080C9968 (thumb)

undefined4 sub_080C9968(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc1) == -1) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(undefined *)(*(int *)(param_1 + 0x2c) + 0xc1) = 0xff;
      iVar2 = *(int *)(param_1 + 0x2c);
      *(undefined4 *)(iVar2 + 0xc) = 2;
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(iVar2 + 9)] + 8);
    }
    if (*(char *)(param_1 + 0x11) == '\0') {
      if (*(char *)(param_1 + 0xb4) == '\0') {
        sub_0801CF00(param_1,0x750f);
      }
      else {
        sub_0801CF00(param_1,0x7510);
        bVar1 = *(byte *)(param_1 + 10);
        uVar3 = ~(uint)(bVar1 >> 5) & 1;
        if (uVar3 == 0) {
          bVar1 = bVar1 & 0xdf;
        }
        else {
          bVar1 = bVar1 | 0x20;
        }
        *(byte *)(param_1 + 10) = bVar1;
        *(char *)(param_1 + 0x4d) = (char)uVar3;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | (byte)(uVar3 << 5);
      }
      *(undefined *)(param_1 + 0xc1) = 0;
    }
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    sub_080CA084(param_1);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xc1) = '\x01';
  }
  if (*(char *)(param_1 + 0xc1) != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0x10);
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

