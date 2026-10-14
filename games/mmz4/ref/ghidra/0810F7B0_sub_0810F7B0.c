// sub_0810F7B0 at 0x0810F7B0 (thumb)

undefined4 sub_0810F7B0(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 in_lr;
  
  uVar1 = *(ushort *)(param_1 + 8);
  iVar3 = sub_08000A70(0x140);
  if (iVar3 != 0) {
    DAT_03001708 = &DAT_04000052;
    DAT_0300170c = 0xa2600001;
    puVar4 = (undefined2 *)(iVar3 + 0x1e);
    DAT_03001704 = iVar3;
    do {
      *puVar4 = 0x1000;
      puVar4 = puVar4 + -1;
    } while (iVar3 <= (int)puVar4);
    iVar5 = 0x10;
    puVar6 = (ushort *)(iVar3 + 0x20);
    do {
      uVar2 = FUN_081288bc(iVar5 + -0x10,3);
      *puVar6 = uVar2 | 0x1000;
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x40);
    if (iVar5 < 0x60) {
      puVar4 = (undefined2 *)(iVar5 * 2 + iVar3);
      do {
        *puVar4 = 0x1010;
        puVar4 = puVar4 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x60);
    }
    if (iVar5 < 0x90) {
      puVar6 = (ushort *)(iVar5 * 2 + iVar3);
      do {
        uVar2 = FUN_081288bc(0x90 - iVar5,3);
        *puVar6 = uVar2 | 0x1000;
        puVar6 = puVar6 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x90);
    }
    if (iVar5 < 0xa0) {
      puVar4 = (undefined2 *)(iVar5 * 2 + iVar3);
      do {
        *puVar4 = 0x1000;
        puVar4 = puVar4 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0xa0);
    }
  }
  uVar2 = *(ushort *)(param_1 + 8);
  if (((uVar2 & 0x3ff) == 0) && ((int)((uint)uVar2 << 0x10) >> 0x1a < 6)) {
    iVar3 = (((int)((uint)uVar1 << 0x10) >> 0x12) << 0x10) >> 0x19;
    if ((uVar2 & 0x400) == 0) {
      sub_08001D30(&DAT_08b6cd20 + iVar3 * 0x28,(DAT_02000a08 & 0xc) << 0xc);
      sub_08002208(&DAT_08b6cd2c + iVar3 * 0x28,0);
      sub_08002734(0x24,&DAT_08b2c000,iVar3 * 0x2000000 + 0xa8000000U >> 0x18,0,0x20);
    }
    else {
      sub_08001D30(&UNK_08b6cd34 + iVar3 * 0x28,(DAT_02000a06 & 0xc) << 0xc);
      sub_08002208(&DAT_08b6cd40 + iVar3 * 0x28,0);
      sub_08002734(0x12,&DAT_08b2c000,iVar3 * 0x2000000 + 0xa9000000U >> 0x18,0,uVar2 & 0x3ff);
    }
  }
  DAT_02000a14._2_2_ = (short)uVar1 >> 2 & 0x1ff;
  DAT_02000a12 = DAT_02000a14._2_2_;
  return in_lr;
}

