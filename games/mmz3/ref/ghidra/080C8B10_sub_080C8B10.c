// sub_080C8B10 at 0x080C8B10 (thumb)

undefined4 sub_080C8B10(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar3 + 0xc) < 2) {
    uVar6 = **(undefined4 **)(iVar3 + 0x74);
    bVar7 = 0;
    pbVar4 = (byte *)(param_1 + 0x7b);
    bVar1 = *pbVar4;
    bVar2 = *(byte *)(param_1 + 10);
    if (bVar1 != 0) {
      do {
        uVar6 = sub_080FE460(uVar6,10);
        bVar7 = bVar7 + 1;
      } while (bVar7 < bVar1);
    }
    uVar5 = sub_080FE4D8(uVar6,10);
    if (((uVar5 == 0) && (*pbVar4 != 0)) && (*(char *)(param_1 + 0x11) == '\0')) {
      *(byte *)(param_1 + 10) = bVar2 & 0xfe;
    }
    else {
      if (*(char *)(iVar3 + 0x13) == '\0') {
        bVar2 = bVar2 & 0xfe;
      }
      else {
        bVar2 = bVar2 | 1;
      }
      *(byte *)(param_1 + 10) = bVar2;
      sub_08017700(param_1,uVar5 & 0xffff | 0xe800);
      sub_080177F4(param_1);
      *(uint *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + (uint)*pbVar4 * -0x800;
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar3 + 0x58);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
    sub_080C8A2C(param_1);
  }
  return in_lr;
}

