// sub_080F70A8 at 0x080F70A8 (thumb)

undefined4 sub_080F70A8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined *puVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined2 uVar11;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x64ac);
  bVar1 = *(byte *)(param_1 + 3);
  if (bVar1 == 2) {
    puVar8 = &DAT_0836e9d8;
    puVar3 = (undefined2 *)((*(byte *)(param_1 + 0xe04) + 0xb5) * 2);
  }
  else if (bVar1 < 3) {
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0xe03) == '\0') {
      if (*(char *)(iVar2 + 0xb4) != -1) {
        sub_080E9604(&DAT_0836f268 + (ushort)(&DAT_0836e9d8)[*(byte *)(param_1 + 0xe03) + 0xaf],0x11
                     ,5);
        iVar2 = sub_080F7504(param_1,*(char *)(iVar2 + 0xb4));
        puVar4 = &DAT_0836f268 + *(ushort *)((int)&DAT_0836e9d8 + ((uint)(iVar2 << 0x10) >> 0xf));
        uVar9 = 0x11;
        goto LAB_080f7414;
      }
      puVar3 = &DAT_0836e9d8;
      puVar8 = (undefined2 *)0x186;
    }
    else {
      if (*(char *)(param_1 + 0xe03) == '\x01') {
        if (*(char *)(iVar2 + 0xb5) != -1) {
          sub_080E9604(&DAT_0836f268 + (ushort)(&DAT_0836e9d8)[*(byte *)(param_1 + 0xe03) + 0xaf],
                       0x11,5);
          iVar2 = sub_080F7504(param_1,*(undefined *)(iVar2 + 0xb5));
          puVar4 = &DAT_0836f268 + *(ushort *)((int)&DAT_0836e9d8 + ((uint)(iVar2 << 0x10) >> 0xf));
          uVar9 = 0x11;
          goto LAB_080f7414;
        }
        puVar5 = &DAT_0836eb60;
        goto LAB_080f720c;
      }
      puVar8 = &DAT_0836e9d8;
      puVar3 = (undefined2 *)((*(byte *)(param_1 + 0xe03) + 0xaf) * 2);
    }
  }
  else {
    if (bVar1 != 3) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0xdfc) == -1) {
      puVar3 = &DAT_0836e9d8;
      puVar8 = (undefined2 *)0x252;
    }
    else {
      uVar10 = (uint)(byte)((char *)(param_1 + 0xdfc))[*(byte *)(param_1 + 0xe05)];
      switch(*(undefined *)(param_1 + 0xe03)) {
      case 0:
      case 1:
      case 2:
        iVar2 = sub_080F7504(param_1,uVar10);
        puVar8 = &DAT_0836e9d8;
        puVar3 = (undefined2 *)((uint)(iVar2 << 0x10) >> 0xf);
        break;
      case 3:
        switch(*(undefined *)(param_1 + 0xe17)) {
        case 1:
        case 4:
        case 5:
          iVar6 = uVar10 * 4;
          uVar7 = (uint)(*(int *)(DAT_0203063c + uVar10) << 0x1b) >> 0x1e;
          if (((byte)(&DAT_0836e30c)[iVar6] & 7) == uVar7) {
            iVar6 = (uint)(byte)(&DAT_0836e30f)[iVar6] * 6;
          }
          else {
            iVar6 = ((uint)(byte)(&DAT_0836e30f)[iVar6] * 3 + uVar7 + 1) * 2;
          }
          uVar11 = *(undefined2 *)(&DAT_0836e2c4 + iVar6);
          sub_080E9604(&DAT_0836fdda,0x11,5);
          sub_080F386C(uVar11,0x14,7);
          sub_080E9604(&DAT_0836f281,0x15,7);
          sub_080F386C(*(undefined2 *)(iVar2 + 0xba),0x1a,7);
          sub_080E9604(&DAT_0836fea2,0x1b,7);
          iVar2 = sub_080F7504(param_1,uVar10);
          sub_080E9604(&DAT_0836f268 +
                       *(ushort *)((int)&DAT_0836e9d8 + ((uint)(iVar2 << 0x10) >> 0xf)),0x11,9);
          return in_lr;
        case 2:
          goto switchD_080f723a_caseD_2;
        default:
          return in_lr;
        }
      case 4:
        iVar2 = sub_080F7504(param_1,uVar10);
        sub_080E9604(&DAT_0836f268 +
                     *(ushort *)((int)&DAT_0836e9d8 + ((uint)(iVar2 << 0x10) >> 0xf)),0x11,5);
        return in_lr;
      default:
        return in_lr;
      }
    }
  }
  puVar5 = (ushort *)((int)puVar3 + (int)puVar8);
LAB_080f720c:
  sub_080E9604(&DAT_0836f268 + *puVar5,0x11,5);
  return in_lr;
switchD_080f723a_caseD_2:
  iVar6 = uVar10 * 4;
  uVar7 = (uint)(*(int *)(DAT_0203063c + uVar10) << 0x1b) >> 0x1e;
  if (((byte)(&DAT_0836e30c)[iVar6] & 7) == uVar7) {
    uVar11 = *(undefined2 *)(&DAT_0836e2c4 + (uint)(byte)(&DAT_0836e30f)[iVar6] * 6);
    if (((uint)(byte)(&DAT_0836e30c)[iVar6] << 0x1a) >> 0x1d == 1) {
      if ((*(byte *)(int *)(DAT_0203063c + uVar10) & 4) == 0) {
        iVar6 = 0x17a;
        goto LAB_080f739e;
      }
      puVar5 = &DAT_0836eb54;
      goto LAB_080f73a0;
    }
    sub_080E9604(&DAT_0836fe49,0x11,9);
  }
  else {
    uVar11 = *(undefined2 *)
              (&DAT_0836e2c4 + ((uint)(byte)(&DAT_0836e30f)[iVar6] * 3 + uVar7 + 1) * 2);
    iVar6 = 0x178;
LAB_080f739e:
    puVar5 = (ushort *)((int)&DAT_0836e9d8 + iVar6);
LAB_080f73a0:
    sub_080E9604(&DAT_0836f268 + *puVar5,0x11,9);
  }
  sub_080E9604(&DAT_0836fdda,0x11,5);
  sub_080F386C(uVar11,0x14,7);
  sub_080E9604(&DAT_0836f281,0x15,7);
  sub_080F386C(*(undefined2 *)(iVar2 + 0xba),0x1a,7);
  puVar4 = &DAT_0836fea2;
  uVar9 = 0x1b;
LAB_080f7414:
  sub_080E9604(puVar4,uVar9,7);
  return in_lr;
}

