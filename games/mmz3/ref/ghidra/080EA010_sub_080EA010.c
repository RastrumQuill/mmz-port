// sub_080EA010 at 0x080EA010 (thumb)

undefined4 sub_080EA010(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *param_1;
  DAT_020023c0 = DAT_020023c0 | 0x100;
  uVar2 = *(undefined4 *)param_1[4];
  sVar1 = FUN_080fe2f8(uVar2,600);
  sVar1 = sVar1 * 2;
  *(short *)(iVar5 + 0x68) = sVar1 + 0x1380;
  *(short *)(iVar5 + 0x6a) = sVar1 + 0x1381;
  *(short *)(iVar5 + 0xa8) = sVar1 + 0x1395;
  *(short *)(iVar5 + 0xaa) = sVar1 + 0x1396;
  uVar3 = FUN_080fe2f8(uVar2,0x3c);
  sVar1 = sub_080FE390(uVar3,10);
  sVar1 = sVar1 * 2;
  *(short *)(iVar5 + 0x6c) = sVar1 + 0x1380;
  *(short *)(iVar5 + 0x6e) = sVar1 + 0x1381;
  *(short *)(iVar5 + 0xac) = sVar1 + 0x1395;
  *(short *)(iVar5 + 0xae) = sVar1 + 0x1396;
  *(undefined2 *)(iVar5 + 0x70) = 0x1394;
  *(undefined2 *)(iVar5 + 0xb0) = 0x13a9;
  iVar4 = sub_080FE390(uVar2,0x3c);
  sVar1 = FUN_080fe2f8(iVar4,6);
  sVar1 = sVar1 * 2;
  *(short *)(iVar5 + 0x72) = sVar1 + 0x1380;
  *(short *)(iVar5 + 0x74) = sVar1 + 0x1381;
  *(short *)(iVar5 + 0xb2) = sVar1 + 0x1395;
  *(short *)(iVar5 + 0xb4) = sVar1 + 0x1396;
  uVar2 = FUN_080fe2f8(iVar4 * 100,0x3c);
  sVar1 = sub_080FE390(uVar2,10);
  sVar1 = sVar1 * 2;
  *(short *)(iVar5 + 0x76) = sVar1 + 0x1380;
  *(short *)(iVar5 + 0x78) = sVar1 + 0x1381;
  *(short *)(iVar5 + 0xb6) = sVar1 + 0x1395;
  *(short *)(iVar5 + 0xb8) = sVar1 + 0x1396;
  return in_lr;
}

