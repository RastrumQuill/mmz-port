// sub_0810D01C at 0x0810D01C (thumb)

undefined4 sub_0810D01C(void)

{
  int *piVar1;
  ushort uVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 in_lr;
  
  piVar8 = DAT_0202f348;
  if (DAT_0202f348 != (int *)0x0) {
    do {
      if ((*(ushort *)((int)piVar8 + 6) & 0x8000) != 0) {
        *(ushort *)((int)piVar8 + 6) = *(ushort *)((int)piVar8 + 6) & 0x7fff;
        uVar4 = (uint)*(ushort *)(piVar8 + 1);
        iVar9 = (DAT_02000a04 & 0xc) * 0x1000 + 0x6000000;
        if (uVar4 < 0x200) {
          iVar7 = (uVar4 & 0xfff0) * 0x40 + (uVar4 & 0xf) * 0x20;
          sub_081284E4(&DAT_08129e70 + iVar7,iVar9 + (uint)*(ushort *)((int)piVar8 + 6) * 0x20,8);
          puVar5 = &UNK_0812a070;
LAB_0810d134:
          sub_081284E4(puVar5 + iVar7,iVar9 + (uint)*(ushort *)((int)piVar8 + 6) * 0x20 + 0x20,8);
        }
        else if (uVar4 < 0x400) {
          piVar6 = (int *)(iVar9 + (uint)*(ushort *)((int)piVar8 + 6) * 0x20);
          uVar2 = 0;
          piVar1 = (int *)(&DAT_08129e70 + (uVar4 & 0x1f0) * 0x40 + (uVar4 & 0xf) * 0x20);
          do {
            piVar3 = piVar1;
            *piVar6 = *piVar3 << 2;
            piVar6 = piVar6 + 1;
            uVar2 = uVar2 + 1;
            piVar1 = piVar3 + 1;
          } while (uVar2 < 8);
          piVar3 = piVar3 + 0x79;
          uVar2 = 0;
          do {
            iVar9 = *piVar3;
            piVar3 = piVar3 + 1;
            *piVar6 = iVar9 << 2;
            piVar6 = piVar6 + 1;
            uVar2 = uVar2 + 1;
          } while (uVar2 < 8);
        }
        else {
          if ((*(ushort *)(piVar8 + 1) & 0x800) == 0) {
            iVar7 = (uVar4 & 0x1f0) * 0x80 + (uVar4 & 0xf) * 0x40;
            sub_081284E4(&UNK_0812eb30 + iVar7,iVar9 + (uint)*(ushort *)((int)piVar8 + 6) * 0x20,8);
            puVar5 = &UNK_0812ef30;
            goto LAB_0810d134;
          }
          iVar7 = (uVar4 & 0x1f0) * 0x80 + (uVar4 & 0xf) * 0x40;
          sub_081284E4(&UNK_0812eb50 + iVar7,iVar9 + (uint)*(ushort *)((int)piVar8 + 6) * 0x20,8);
          sub_081284E4(&UNK_0812ef50 + iVar7,
                       iVar9 + (uint)*(ushort *)((int)piVar8 + 6) * 0x20 + 0x20,8);
        }
      }
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)0x0);
  }
  return in_lr;
}

