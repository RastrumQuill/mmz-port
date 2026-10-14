// sub_080710E4 at 0x080710E4 (thumb)

undefined4 sub_080710E4(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  if ((iVar7 != 0) && (1 < *(byte *)(iVar7 + 0xc))) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    iVar7 = 0;
  }
  iVar6 = param_1 + 0x54;
  uVar3 = sub_08015188(&DAT_0202ed18,iVar6);
  if (0x6000 < uVar3) {
    if (iVar7 == 0) {
      if (*(int *)(param_1 + 0x2c) != 0) {
        sub_08065A04();
      }
LAB_0807113c:
      sub_08065A04(param_1);
      return in_lr;
    }
    if (7 < *(byte *)(iVar7 + 0xd)) {
      if (*(int *)(param_1 + 0x2c) != 0) {
        sub_08065A04();
      }
      *(undefined4 *)(iVar7 + 0x2c) = 0;
      goto LAB_0807113c;
    }
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    sub_08071574(param_1);
    pcVar4 = (char *)(param_1 + 0xb4);
    if (*pcVar4 == '\0') {
      if (0xc < *(byte *)(param_1 + 0xa4)) goto LAB_080711d4;
      iVar7 = *(int *)(param_1 + 0x2c);
      if (iVar7 == 0) {
        sub_080713C4(param_1,1,1);
      }
      else {
        sub_080713C4(iVar7,2,*(undefined *)(iVar7 + 0xb4));
      }
      uVar5 = 0x1901;
    }
    else {
      if ((*pcVar4 != '\x01') || (6 < *(byte *)(param_1 + 0xa4))) goto LAB_080711d4;
      iVar7 = *(int *)(param_1 + 0x2c);
      if (iVar7 == 0) {
        sub_080713C4(param_1,1,1);
      }
      else {
        sub_080713C4(iVar7,2,*(undefined *)(iVar7 + 0xb4));
      }
      uVar5 = 0x1902;
    }
    sub_080127E4(param_1,uVar5);
    sub_08071608(param_1);
    *pcVar4 = *pcVar4 + '\x01';
  }
LAB_080711d4:
  bVar2 = *(byte *)(param_1 + 0xd);
  if (bVar2 == 1) {
    sub_08071448(param_1);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68);
    cVar1 = sub_08071744(param_1,0x1000,0);
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0xb8) < 0x2801) {
        sub_080B0ACC(iVar6,&DAT_0833ed64,0,0);
        sub_080B0ACC(iVar6,&DAT_0833ed80,0,0x11);
        sub_080B0ACC(iVar6,&DAT_0833ed9c,0,0);
        *(undefined *)(param_1 + 0xd) = 0;
      }
      else {
        sub_0807169C(param_1);
        *(undefined *)(param_1 + 0x12) = 0;
        *(uint *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
        *(undefined *)(param_1 + 0xd) = 2;
      }
    }
  }
  else if (bVar2 < 2) {
    if (bVar2 == 0) {
      sub_08071448(param_1);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68);
      cVar1 = sub_08071744(param_1,0x1000,0);
      if (cVar1 == '\0') {
        *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
        *(undefined *)(param_1 + 0xd) = 1;
      }
    }
  }
  else if (bVar2 == 2) {
    sub_08071744(param_1,0x1000,0);
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if ((bVar2 & 1) != 0) {
      return in_lr;
    }
    pcVar4 = (char *)(param_1 + 0xb4);
    if (*pcVar4 == '\0') {
      uVar5 = 0x1901;
    }
    else {
      if (*pcVar4 != '\x01') {
        sub_0807169C(param_1);
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
        sub_08070FC4(param_1);
        return in_lr;
      }
      uVar5 = 0x1902;
    }
    sub_080127E4(param_1,uVar5);
    *pcVar4 = *pcVar4 + '\x01';
  }
  *(undefined *)(param_1 + 0xb5) = *(undefined *)(param_1 + 0xd);
  return in_lr;
}

