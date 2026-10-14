// sub_080F8034 at 0x080F8034 (thumb)

undefined4 sub_080F8034(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = param_1 + 0xed8;
  uVar5 = 0;
  do {
    uVar2 = (uint)*(byte *)(param_1 + 0xdd7) * 5 + uVar5;
    pbVar4 = (byte *)(DAT_0203df90 + ((int)uVar2 >> 2));
    uVar2 = uVar2 & 3;
    if (((int)(*pbVar4 & 0xf) >> uVar2 & 1U) == 0) {
      uVar2 = sub_080FE460(uVar5,5);
      iVar1 = sub_080FE4D8(uVar5,5);
      iVar1 = ((uVar2 & 0xff) * 0x40 + ((uint)(iVar1 << 0x18) >> 0x17)) * 2 + iVar6;
      *(undefined2 *)(iVar1 + 0xc6) = 0x31a2;
      *(undefined2 *)(iVar1 + 200) = 0x31a2;
      *(undefined2 *)(iVar1 + 0x106) = 0x31a2;
      *(undefined2 *)(iVar1 + 0x108) = 0x31a2;
    }
    else {
      if (((int)(uint)*pbVar4 >> uVar2 + 4 & 1U) == 0) {
        uVar2 = sub_080FE460(uVar5,5);
        iVar1 = sub_080FE4D8(uVar5,5);
        iVar1 = ((uVar2 & 0xff) * 0x40 + ((uint)(iVar1 << 0x18) >> 0x17)) * 2 + iVar6;
        *(undefined2 *)(iVar1 + 0xc6) = 0x80eb;
        *(undefined2 *)(iVar1 + 200) = 0x80ec;
        *(undefined2 *)(iVar1 + 0x106) = 0x810b;
        uVar3 = 0x810c;
      }
      else {
        uVar2 = sub_080FE460(uVar5,5);
        iVar1 = sub_080FE4D8(uVar5,5);
        iVar1 = ((uVar2 & 0xff) * 0x40 + ((uint)(iVar1 << 0x18) >> 0x17)) * 2 + iVar6;
        *(undefined2 *)(iVar1 + 0xc6) = 0x80ed;
        *(undefined2 *)(iVar1 + 200) = 0x80ee;
        *(undefined2 *)(iVar1 + 0x106) = 0x810d;
        uVar3 = 0x810e;
      }
      *(undefined2 *)(iVar1 + 0x108) = uVar3;
    }
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 0x1e);
  sub_08003B28(param_1 + 0xed8,(DAT_020023c6 & 0x1f00) << 3,0x1000);
  return in_lr;
}

