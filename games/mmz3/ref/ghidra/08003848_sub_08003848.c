// sub_08003848 at 0x08003848 (thumb)

undefined4 sub_08003848(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 local_18;
  
  if (DAT_02002248 != 0) {
    DAT_040000d4 = DAT_02002248;
    DAT_040000d8 = DAT_0200224c + 0x6000000;
    DAT_040000dc = DAT_02002244 >> 2 | 0x84000000;
    uVar1 = DAT_040000dc;
    local_18 = DAT_02002250;
    DAT_040000d4 = &local_18;
    DAT_040000d8 = DAT_02002248;
    DAT_040000dc = DAT_02002244 >> 2 | 0x85000000;
    uVar1 = DAT_040000dc;
  }
  if (DAT_02002180 != 0) {
    iVar4 = DAT_02002180;
    iVar5 = DAT_02002180 * 0xc;
    do {
      iVar4 = iVar4 + -1;
      puVar3 = (uint *)(&DAT_02002178 + iVar5);
      if ((*(byte *)puVar3 & 3) == 0) {
        sub_0800393C(*(undefined4 *)((int)&DAT_02002180 + iVar5),
                     *(undefined4 *)((int)&DAT_0200217c + iVar5));
      }
      else if ((*(byte *)puVar3 & 3) == 1) {
        uVar2 = *puVar3 >> 2;
        if (uVar2 < 0x20) {
          FUN_080fe114(*(undefined4 *)((int)&DAT_02002180 + iVar5),
                       *(int *)((int)&DAT_0200217c + iVar5) + 0x6000000,*puVar3 >> 3 & 0x1fffff);
        }
        else {
          sub_080FE110(*(undefined4 *)((int)&DAT_02002180 + iVar5),
                       *(int *)((int)&DAT_0200217c + iVar5) + 0x6000000,(int)uVar2 >> 2 & 0x1fffff);
        }
      }
      else {
        local_18 = *(undefined4 *)((int)&DAT_02002180 + iVar5);
        sub_080FE110(&local_18,*(int *)((int)&DAT_0200217c + iVar5) + 0x6000000,
                     (int)(*puVar3 >> 2) >> 2 & 0x1fffffU | 0x1000000);
      }
      iVar5 = iVar5 + -0xc;
    } while (iVar4 != 0);
  }
  DAT_02002180 = 0;
  return in_lr;
}

