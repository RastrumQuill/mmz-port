// sub_080C9CB0 at 0x080C9CB0 (thumb)

undefined4 sub_080C9CB0(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined *)(param_1 + 0xb5) = 1;
    if ((*(char *)(param_1 + 0x11) != '\x03') && (*(int *)(param_1 + 0x2c) != 0)) {
      *(undefined *)(*(int *)(param_1 + 0x2c) + 0xb6) = *(undefined *)(param_1 + 0xb6);
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
      *(undefined *)(*(int *)(param_1 + 0x2c) + 0xd) = 2;
      *(undefined *)(*(int *)(param_1 + 0x2c) + 0xe) = 0;
      if (*(char *)(param_1 + 0xc1) == '\x01') {
        *(undefined *)(*(int *)(param_1 + 0x2c) + 0xc1) = 1;
      }
      if (*(int *)(*(int *)(param_1 + 0x2c) + 0x28) != 0) {
        sub_080CA084(*(int *)(param_1 + 0x2c));
      }
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x28) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080C9C40(param_1);
  cVar1 = sub_080C9EB4(param_1);
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 0xc1) == '\x01') {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xb8);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xbc);
      *(undefined *)(param_1 + 0xb4) = 1;
      if (*(char *)(param_1 + 0x11) != '\0') {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        *(undefined *)(param_1 + 0xb5) = 0;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0x200;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      pbVar4 = (byte *)(param_1 + 0x4a);
      *pbVar4 = *pbVar4 & 0xef;
      uVar5 = (uint)*(byte *)(param_1 + 0xb6);
      if (uVar5 == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xdf;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 0x20;
      }
      *(byte *)(param_1 + 10) = bVar2;
      uVar5 = uVar5 & 1;
      *(undefined *)(param_1 + 0x4d) = (char)uVar5;
      *pbVar4 = *pbVar4 & 0xdf | (byte)(uVar5 << 5);
      if (*(char *)(param_1 + 0x11) == '\0') {
        sub_0801CF00(param_1,0x750b);
      }
      else if (*(char *)(param_1 + 0x11) == '\x03') {
        sub_0801CF00(param_1,0x750b);
        bVar2 = *(byte *)(param_1 + 10);
        uVar5 = ~(uint)(bVar2 >> 5) & 1;
        if (uVar5 == 0) {
          bVar2 = bVar2 & 0xdf;
        }
        else {
          bVar2 = bVar2 | 0x20;
        }
        *(byte *)(param_1 + 10) = bVar2;
        *(undefined *)(param_1 + 0x4d) = (char)uVar5;
        *pbVar4 = *pbVar4 & 0xdf | (byte)(uVar5 << 5);
      }
      else {
        sub_0801CF00(param_1,0x750c);
      }
      sub_080C9F08(param_1);
      if (*(byte *)(param_1 + 0xb6) == 0) {
        iVar3 = *(int *)(param_1 + 0x60) * -0x100;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 0xff;
        }
        *(int *)(param_1 + 0x60) = iVar3 >> 8;
      }
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

