// sub_0811AB74 at 0x0811AB74 (thumb)

undefined4 sub_0811AB74(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  sub_080027B8(param_1 + 0x16d8,&DAT_08b2c000,0x15,0,0);
  uVar4 = 0;
  if (*(char *)(param_1 + 0xdda) != '\0') {
    do {
      bVar1 = *(byte *)(param_1 + 0xdd4 + uVar4);
      if (bVar1 != 0xff) {
        uVar2 = (ushort)((int)(uint)*(byte *)(DAT_0202eda8 + (uint)(bVar1 >> 1)) >>
                        ((bVar1 & 1) << 2)) & 0xf;
        iVar3 = uVar4 * 0x80 + param_1 + 0x16d8;
        *(undefined2 *)(iVar3 + 0x9e) = 0x2293;
        *(undefined2 *)(iVar3 + 0xde) = 0x22b3;
        *(ushort *)(iVar3 + 0xa0) = uVar2 + 0x294 | 0x2000;
        *(ushort *)(iVar3 + 0xe0) = uVar2 + 0x2b4 | 0x2000;
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < *(byte *)(param_1 + 0xdda));
  }
  sub_08001F1C(param_1 + 0xed8,(DAT_02000a06 & 0x1f00) << 3,0x1000);
  return in_lr;
}

