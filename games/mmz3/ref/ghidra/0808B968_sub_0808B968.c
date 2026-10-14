// sub_0808B968 at 0x0808B968 (thumb)

/* WARNING: Type propagation algorithm not settling */

undefined4 sub_0808B968(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0x6502);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 1:
    break;
  case 2:
    sub_08017700(param_1,0x6503);
    *(undefined *)(param_1 + 0x12) = 10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
joined_r0x0808be5a:
    if (cVar1 != '\0') {
      return in_lr;
    }
    goto LAB_0808beaa;
  case 4:
    *(undefined4 *)(param_1 + 0x5c) = 0xffffff80;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff80;
    *(undefined *)(param_1 + 0x12) = 10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    goto joined_r0x0808be5a;
  case 6:
    *(undefined *)(param_1 + 0x12) = 10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    goto joined_r0x0808be5a;
  case 8:
    *(undefined4 *)(param_1 + 0x5c) = 0xffffff80;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff80;
    *(undefined4 *)(param_1 + 100) = 0xffffffe0;
    *(undefined4 *)(param_1 + 0x68) = 0xffffffe0;
    *(undefined *)(param_1 + 0x12) = 0x12;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 9:
    iVar5 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar5;
    iVar3 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar3;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    goto joined_r0x0808be5a;
  case 10:
    sub_08017700(param_1,0x6506);
    sub_08007390(param_1 + 0x74,&DAT_083655a4);
    *(undefined *)(param_1 + 0xc0) = 1;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_0202f5c0 + 0x54);
    *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + -0xe000;
    *(undefined *)(param_1 + 0x13) = 3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    sub_08017700(param_1,0x6506);
    *(int *)(param_1 + 0x68) = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + -0x9000;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xc:
    goto switchD_0808b982_caseD_c;
  case 0xd:
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xe:
    if (*(int *)(DAT_0202f5c0 + 0x54) < *(int *)(param_1 + 0x54)) {
      uVar2 = 0xfffffe00;
    }
    else {
      uVar2 = 0x200;
    }
    *(undefined4 *)(param_1 + 100) = uVar2;
    iVar3 = *(int *)(param_1 + 0x5c) +
            ((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x5c)) * 0x20 >> 8);
    *(int *)(param_1 + 0x5c) = iVar3;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    goto joined_r0x0808be5a;
  case 0xf:
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    sub_0800471C(0x12f);
    *(undefined4 *)(param_1 + 0x60) = 0x300;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x10:
    iVar3 = *(int *)(param_1 + 0x60) + 0x80;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar3;
    if (*(char *)(param_1 + 0x13) == '\x01') {
      iVar3 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),iVar3 + 0x2000);
      if (iVar3 == 0) {
        return in_lr;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
    }
    else {
      iVar3 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),iVar3 + 0x4000);
      if (iVar3 == 0) {
        return in_lr;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
    }
    goto LAB_0808beaa;
  case 0x11:
    local_20 = *(int *)(param_1 + 0x54);
    local_1c = *(int *)(param_1 + 0x58) + 0x3000;
    sub_08017700(param_1,0x6507);
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 == '\0') {
      sub_0801ACF8(8,&local_20);
      sub_0800471C(0x41);
      sub_080AC434(&local_20,0,0xc01,param_1);
      sub_080AC434(&local_20,1,0xc01,param_1);
      uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar4 & 0x7fffffff;
      sub_080AC434(&local_20,(uVar4 * 2 >> 0x11 & 1) + 2,0xc01,param_1);
      sub_080B2484(3,&local_20);
      uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
      local_20 = local_20 + ((uVar4 * 2 >> 0x11 & 0xf) - 8) * 0x100;
      uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar4 & 0x7fffffff;
      local_1c = local_1c + ((uVar4 * 2 >> 0x11 & 0xf) - 10) * 0x100;
      sub_080B2484(3,&local_20);
      uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
      local_20 = local_20 + ((uVar4 * 2 >> 0x11 & 0xf) - 8) * 0x100;
      uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar4 & 0x7fffffff;
      local_1c = local_1c + ((uVar4 * 2 >> 0x11 & 0xf) - 10) * 0x100;
      sub_080B2484(3,&local_20);
    }
    else {
      sub_0801ACF8(4,&local_20);
    }
    *(undefined *)(param_1 + 0x12) = 0x14;
    sub_080177F4(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x12:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    goto joined_r0x0808be5a;
  case 0x13:
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    if (*(char *)(param_1 + 0x13) != '\0') {
      *(undefined *)(param_1 + 0xe) = 0xb;
      return in_lr;
    }
    goto LAB_0808beaa;
  case 0x14:
    sub_08017700(param_1,0x6506);
    *(int *)(param_1 + 0x68) = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + -0x9a00;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x15:
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58)) * 0x20 >> 8);
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    goto joined_r0x0808be5a;
  case 0x16:
    sub_08017700(param_1,0x6503);
    sub_08007390(param_1 + 0x74,&DAT_0836558c);
    *(undefined *)(param_1 + 0xc0) = 0;
    *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0x54) + -0x4000;
    *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + -0x8000;
    *(undefined *)(param_1 + 0x12) = 0x12;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x17:
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         ((*(int *)(*(int *)(param_1 + 0x28) + 0x54) - *(int *)(param_1 + 0x54)) * 0x20 >> 8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         ((*(int *)(*(int *)(param_1 + 0x28) + 0x58) - (*(int *)(param_1 + 0x58) + 0x4000)) * 0x20
         >> 8);
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    goto joined_r0x0808be5a;
  case 0x18:
    sub_08017700(param_1,0x6504);
    *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + -0x4000;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x19:
    *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + -0x4000;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
    break;
  case 0x1a:
    sub_08017700(param_1,0x6501);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(undefined *)(param_1 + 0xe) = 0x1e;
  case 0x1e:
    *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + -0x4000;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_0808b982_caseD_1b;
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_0808beaa:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_0808b982_caseD_1b:
  return in_lr;
switchD_0808b982_caseD_c:
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) +
       ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58)) * 0x20 >> 8);
  sub_080177F4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  goto joined_r0x0808be5a;
}

