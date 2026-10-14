// sub_0811CED0 at 0x0811CED0 (thumb)

undefined4 sub_0811CED0(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  sub_080027B8(param_1 + 0xed8,&DAT_08b2c000,0x85,0,0);
  uVar4 = 0;
  do {
    bVar1 = *(byte *)(param_1 + 0xdd2 + uVar4);
    if (bVar1 != 0xff) {
      uVar2 = (ushort)((int)(uint)*(byte *)(DAT_0202eda8 + (uint)(bVar1 >> 1)) >> ((bVar1 & 1) << 2)
                      ) & 0xf;
      iVar3 = uVar4 * 0x80 + param_1 + 0xed8;
      *(undefined2 *)(iVar3 + 0x9a) = 0x204a;
      *(undefined2 *)(iVar3 + 0xda) = 0x206a;
      *(ushort *)(iVar3 + 0x9c) = uVar2 + 0x4b | 0x2000;
      *(ushort *)(iVar3 + 0xdc) = uVar2 + 0x6b | 0x2000;
    }
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 7);
  sub_08001F1C(param_1 + 0xed8,(DAT_02000a06 & 0x1f00) << 3,0x1000);
  return in_lr;
}

