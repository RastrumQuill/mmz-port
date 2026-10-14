// sub_08031DC4 at 0x08031DC4 (thumb)

undefined4 sub_08031DC4(int param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 0x201;
  uVar9 = ~(uint)(*(byte *)(param_1 + 10) >> 4) & 1;
  if ((*(ushort *)(param_1 + 0xe8) & 0xd) == 0) {
    uVar9 = (uint)(uVar9 == 0);
  }
  *(char *)(param_1 + 0x183) = (char)uVar9;
  uVar8 = 0;
  if (((*(uint *)(param_1 + 0xc) & 0xffff00) != 0x20400) &&
     (((*(char *)(param_1 + 0x94) == '\0' || ((*(uint *)(param_1 + 0x8c) & 1) != 0)) &&
      ((*(byte *)(param_1 + 0x18c) & 0x43) == 0)))) {
    uVar8 = 1;
  }
  sub_08022D58(param_1,uVar9 == 0,1,uVar8);
  cVar2 = sub_08032BF8(param_1);
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0xc4) = 0x380;
    goto LAB_08031ebe;
  }
  if (((*(byte *)(param_1 + 0x202) & 4) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
LAB_08031eb8:
    uVar8 = 0x200;
  }
  else {
    uVar1 = DAT_0202ec34;
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar1 = DAT_0202ec36;
    }
    if ((uVar1 & 0x8000) != 0) goto LAB_08031eb8;
    uVar8 = 0x280;
  }
  *(undefined4 *)(param_1 + 0xc4) = uVar8;
LAB_08031ebe:
  pbVar4 = (byte *)(param_1 + 0x182);
  if (*pbVar4 < 100) {
    iVar5 = sub_080EF150((uint)*pbVar4 * 0x4c0,100);
    iVar5 = 0x4c0 - iVar5;
  }
  else {
    iVar5 = 0;
  }
  *(int *)(param_1 + 0x60) = -iVar5;
  *(undefined *)(param_1 + 0x184) = 8;
  if (*(byte *)(param_1 + 0x176) < 3) {
    if (*(int *)(param_1 + 0xc4) < 0x380) {
      sub_0801E9FC(param_1,9);
      uVar7 = 0;
      if (uVar9 == 0) {
        uVar7 = 1;
      }
    }
    else {
      sub_0801E9FC(param_1,0xc);
      uVar7 = -uVar9 >> 0x1f;
    }
    sub_08022BD8(param_1,uVar7);
  }
  else if (*(char *)(param_1 + 0x2b6) == '\x02') {
    bVar3 = (byte)(-uVar9 >> 0x18);
    *(byte *)(param_1 + 0x4c) = bVar3 >> 7;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | ((char)bVar3 >> 7) * -0x10;
    if ((int)-uVar9 < 0) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
  }
  if (*pbVar4 < 100) {
    iVar5 = *(int *)(param_1 + 0xc4);
    iVar6 = sub_080EF150(iVar5 * (uint)*pbVar4,100);
    iVar5 = iVar5 - iVar6;
  }
  else {
    iVar5 = 0;
  }
  *(int *)(param_1 + 0xc4) = iVar5;
  sub_0801E6AC(0xc);
  return in_lr;
}

