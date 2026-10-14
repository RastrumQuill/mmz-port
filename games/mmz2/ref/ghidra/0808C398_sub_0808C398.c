// sub_0808C398 at 0x0808C398 (thumb)

undefined4 sub_0808C398(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xbd) == '\0') {
    piVar4 = (int *)(param_1 + 0xc0);
    iVar6 = *(int *)(param_1 + 0x54);
    iVar7 = iVar6 - *piVar4;
    if (iVar7 < 0) {
      iVar7 = *piVar4 - iVar6;
    }
    if (0x10000 < iVar7) {
      if (*(char *)(param_1 + 0xd) != '\x02') {
        *(undefined *)(param_1 + 0xd) = 2;
        *(undefined *)(param_1 + 0xe) = 0;
        if (iVar6 - *piVar4 < 0) {
          bVar1 = *(byte *)(param_1 + 10) | 0x10;
        }
        else {
          bVar1 = *(byte *)(param_1 + 10) & 0xef;
        }
        *(byte *)(param_1 + 10) = bVar1;
        bVar1 = (byte)((uint)(iVar6 - *piVar4) >> 0x18);
        *(byte *)(param_1 + 0x4c) = bVar1 >> 7;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | ((char)bVar1 >> 7) * -0x10;
        *(undefined *)(param_1 + 0xbd) = 1;
        return in_lr;
      }
      bVar1 = *(byte *)(param_1 + 10) >> 4;
      if (iVar6 - *piVar4 < 0) {
        if ((bVar1 & 1) == 1) {
          return in_lr;
        }
      }
      else if ((bVar1 & 1) == 0) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xbd) = 1;
      return in_lr;
    }
  }
  uVar5 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
  if ((uVar5 < 0x6001) || (*(char *)(param_1 + 0x10) != '\x01')) {
    cVar2 = sub_0808BB60(param_1);
    if (cVar2 == '\0') {
      uVar3 = 1;
    }
    else {
      if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
        if ((*(uint *)(param_1 + 0x8c) & 0x800) == 0) {
          return in_lr;
        }
        iVar8 = *(int *)(*(int *)(param_1 + 0x84) + 0x2c);
        iVar6 = *(int *)(iVar8 + 0x54);
        iVar7 = iVar6 + 0x800;
        *(int *)(param_1 + 0x54) = iVar7;
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          iVar7 = iVar6 + -0x800;
        }
        *(int *)(param_1 + 0x54) = iVar7;
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar8 + 0x58);
        sub_0808BC04(param_1);
        *(undefined *)(param_1 + 0xd) = 5;
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
      uVar3 = 8;
    }
    *(undefined *)(param_1 + 0xd) = uVar3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

