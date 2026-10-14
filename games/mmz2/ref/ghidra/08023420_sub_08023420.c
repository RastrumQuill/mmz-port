// sub_08023420 at 0x08023420 (thumb)

undefined4 sub_08023420(int param_1)

{
  ushort uVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x1fc) == '\x01') {
    DAT_0202ebbd = DAT_0202ebbd | 0x40;
  }
  else {
    DAT_0202ebbd = DAT_0202ebbd & 0xbf;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x54);
  uVar5 = *(undefined4 *)(param_1 + 0x58);
  bVar2 = *(byte *)(param_1 + 0x18a);
  uVar7 = (uint)bVar2;
  *(byte *)(param_1 + 0x18b) = bVar2;
  sub_0801EAF8(param_1);
  *(char *)(param_1 + 0x17e) = (char)*(undefined2 *)(param_1 + 0xa4);
  sub_08037338(param_1);
  sub_0801EA94(param_1);
  uVar8 = (uint)*(byte *)(param_1 + 0xd);
  iVar4 = param_1 + 0x54;
  puVar6 = (undefined4 *)(param_1 + 0xd8);
  if (uVar8 == 0) {
    sub_0801F478(iVar4,puVar6,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  if (((*(uint *)(param_1 + 0xc) & 0xffff00) != 0x20700) && (uVar8 < 8)) {
    sub_08037628(param_1);
    uVar8 = sub_080EF118(param_1,*(undefined4 *)(&DAT_08333d6c + uVar8 * 4));
    uVar8 = uVar8 & 0xff;
  }
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  *(undefined4 *)(param_1 + 0xb8) = uVar5;
  uVar3 = *(undefined4 *)(param_1 + 0x54);
  uVar5 = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xdc) = *puVar6;
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08333d8c + uVar8 * 4));
  if (*(byte *)(param_1 + 0xd) < 4) {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_08333dc4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  *(undefined4 *)(param_1 + 0xb8) = uVar5;
  sub_0803389C(param_1);
  sub_08036BB4(param_1);
  sub_0801F1FC(iVar4,puVar6,*puVar6,*(byte *)(param_1 + 10) >> 4 & 1,1);
  sub_0801F2E8(iVar4,puVar6,*puVar6,*(byte *)(param_1 + 10) >> 4 & 1,1);
  sub_080375C4(param_1);
  sub_08037408(param_1);
  *(undefined *)(param_1 + 0x192) = 0;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
  if (((*(byte *)(param_1 + 0x202) & 4) != 0) || (*(char *)(param_1 + 0x1fc) == '\x05')) {
    uVar1 = DAT_0202ec34;
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar1 = DAT_0202ec36;
    }
    if ((uVar1 & 0x8000) == 0) {
      iVar4 = 0x280;
      goto LAB_080235cc;
    }
  }
  iVar4 = 0x200;
LAB_080235cc:
  if ((uint)(iVar4 * 2) < (uint)(*(int *)(param_1 + 0xc4) + iVar4)) {
    if (*(int *)(param_1 + 0xcc) == 0) {
      uVar3 = sub_080AE1E8(param_1);
      *(undefined4 *)(param_1 + 0xcc) = uVar3;
    }
  }
  else if (*(int *)(param_1 + 0xcc) != 0) {
    *(undefined *)(*(int *)(param_1 + 0xcc) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  bVar2 = sub_08022C40(param_1,*puVar6);
  *(byte *)(param_1 + 0x18a) = bVar2;
  uVar8 = (uint)bVar2;
  if (uVar8 != uVar7) {
    if (uVar7 < uVar8) {
      if ((0x59 < uVar8) && (uVar7 < 0x5a)) {
        sub_0801E6AC(0x32);
      }
    }
    else if ((uVar8 < 0x5a) && (0x59 < uVar7)) {
      sub_08003338(0x32);
    }
    if ((uVar8 - 0xb < 0x50) || (uVar7 - 0xb < 0x50)) {
      if (uVar7 - 0xb < 0x50) {
        if (0x4f < uVar8 - 0xb) {
          sub_080AFC70(*(undefined4 *)(param_1 + 0xd0));
        }
      }
      else {
        uVar3 = sub_080AFC20(param_1,0,0xffffff00);
        *(undefined4 *)(param_1 + 0xd0) = uVar3;
        if (uVar7 < uVar8) {
          sub_080AFC20(param_1,1,0xffffff00);
        }
        else {
          sub_080AFC20(param_1,2,0xffffff00);
        }
        sub_0801E6AC(0xf);
      }
    }
    else {
      sub_080AFC70(*(undefined4 *)(param_1 + 0xd0));
    }
  }
  return in_lr;
}

