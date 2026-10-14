// sub_0800860C at 0x0800860C (thumb)

undefined4 sub_0800860C(int param_1,int param_2,ushort *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  undefined *puVar7;
  undefined4 in_lr;
  
  uVar3 = (uint)param_3[1];
  puVar6 = param_3 + 2;
  uVar4 = (uint)*(byte *)(*(int *)(*(int *)(&DAT_0831408c + ((byte)DAT_020011d0 & 0x7f) * 4) + 0xc)
                         + 2);
  puVar7 = &DAT_020017e4 + (uVar4 * 0xf * param_2 + param_1) * 2;
  uVar5 = 0;
  if (uVar3 != 0 && -1 < (int)(uVar3 * 0x10000)) {
    iVar1 = (int)((uint)*param_3 << 0x11) >> 0x10;
    do {
      sub_08000988(puVar6,puVar7,iVar1);
      puVar6 = (ushort *)((int)puVar6 + iVar1);
      puVar7 = puVar7 + uVar4 * 0x1e;
      uVar2 = uVar5 * 0x10000 + 0x10000;
      uVar5 = uVar2 >> 0x10;
    } while ((int)(uVar2 + uVar3 * -0x10000) < 0 != SBORROW4(uVar2,uVar3 * 0x10000));
  }
  DAT_0202d000 = 1;
  return in_lr;
}

