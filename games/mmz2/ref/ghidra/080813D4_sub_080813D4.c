// sub_080813D4 at 0x080813D4 (thumb)

undefined4 sub_080813D4(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,*(undefined2 *)(&DAT_08340cb4 + (uint)*(byte *)(param_1 + 0x11) * 4));
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (1 < bVar1) {
    sub_080032EC(0x2a);
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    uVar2 = (uVar2 * 2 >> 0x11 & 0x1f) - 0xf & 0xff;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = uVar2 + 0x80 & 0xff;
    }
    sub_080B98CC(param_1,1,uVar2,0x5d04);
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    uVar2 = uVar3 * 2 >> 0x11;
    uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar3 & 0x7fffffff;
    uVar3 = uVar3 * 2 >> 0x11 & 1;
    uVar7 = 0;
    iVar4 = param_1 + 0x54;
    if (uVar3 != 0xfffffffc) {
      do {
        uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar5 & 0x7fffffff;
        iVar6 = sub_080EF330(uVar5 * 2 >> 0x11,3);
        sub_080B98CC(param_1,1,uVar2 & 0xff,*(undefined2 *)(&DAT_08340cbc + iVar6 * 2));
        uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar5 & 0x7fffffff;
        uVar2 = (uVar2 & 0xff) + 0x20 + (uVar5 * 2 >> 0x11 & 0xf);
        uVar7 = uVar7 + 1 & 0xff;
      } while (uVar7 < uVar3 + 4);
    }
    sub_080AC60C(2,iVar4);
    sub_0801DD2C(2,iVar4);
    if (DAT_0202ebfc < 9999) {
      DAT_0202ebfc = DAT_0202ebfc + 1;
    }
    sub_0801DE2C(param_1,iVar4);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

