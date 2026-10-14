// sub_080E024C at 0x080E024C (thumb)

undefined4 sub_080E024C(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  undefined4 in_lr;
  short local_24 [4];
  int local_1c;
  
  psVar6 = local_24;
  psVar7 = local_24;
  sub_08128B5C(local_24,&DAT_08129b7c,6);
  bVar1 = *(byte *)(param_1 + 0x11);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080E037C(param_1);
  }
  else {
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0xd) == '\0') {
      iVar5 = *(byte *)(param_1 + 0x12) - 0x20;
      iVar4 = FUN_081288bc((0x30 - iVar5) * 0x40,0x30);
      iVar4 = (int)*(short *)((int)&DAT_08128c10 + ((uint)(iVar4 << 0x18) >> 0x17));
      *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 100) + ((uint)bVar1 * 2 + -1) * -0x1c * iVar4;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) + iVar4 * 6;
      if (iVar5 < 1) {
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
      iVar4 = *(int *)(param_1 + 0x58);
      local_1c = 2;
      do {
        sVar3 = sub_08007C7C(*(int *)(param_1 + 0x54) + (int)*psVar6,iVar4 + -0x1600);
        if (sVar3 != 0) {
          *(undefined *)(param_1 + 0xd) = 2;
        }
        psVar6 = psVar6 + 1;
        local_1c = local_1c + -1;
      } while (-1 < local_1c);
    }
    else if (*(char *)(param_1 + 0xd) == '\x01') {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar4 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar4;
      if (0x700 < iVar4) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      iVar4 = *(int *)(param_1 + 0x58);
      local_1c = 2;
      do {
        sVar3 = sub_08007C7C(*(int *)(param_1 + 0x54) + (int)*psVar7,iVar4 + -0x1600);
        if (sVar3 != 0) {
          *(undefined *)(param_1 + 0xd) = 2;
        }
        psVar7 = psVar7 + 1;
        local_1c = local_1c + -1;
      } while (-1 < local_1c);
    }
  }
  return in_lr;
}

