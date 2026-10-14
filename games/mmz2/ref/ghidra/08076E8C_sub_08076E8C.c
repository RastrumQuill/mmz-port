// sub_08076E8C at 0x08076E8C (thumb)

undefined4 sub_08076E8C(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
  }
  else {
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(DAT_0202e130 + 0x54);
  }
  if ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) ==
      *(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xb4)) {
    cVar1 = *(char *)(param_1 + 0xd);
    pcVar5 = (char *)(param_1 + 0xb8);
    if ((cVar1 == '\x01') && (*pcVar5 == '\x01')) {
LAB_08076eee:
      uVar2 = 0;
LAB_0807701c:
      *pcVar5 = cVar1;
      *(undefined *)(param_1 + 0xd) = uVar2;
    }
    else {
      if ((cVar1 == '\0') && (*pcVar5 == '\0')) {
        *pcVar5 = '\0';
        uVar2 = 1;
        goto LAB_08076f02;
      }
      if ((cVar1 == '\x02') && (*pcVar5 == '\x02')) {
        *pcVar5 = '\x02';
        uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar4 & 0x7fffffff;
        if ((uVar4 * 2 >> 0x11 & 1) == 0) {
          *(undefined *)(param_1 + 0xd) = 1;
        }
        else {
          *(undefined *)(param_1 + 0xd) = 0;
        }
        uVar2 = 0;
      }
      else {
        if (*(char *)(param_1 + 0x10) == '\0') {
          uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
          DAT_0202e188 = uVar4 & 0x7fffffff;
          uVar4 = uVar4 * 2 >> 0x11 & 0xf;
          if (uVar4 < 3) {
            *pcVar5 = cVar1;
            uVar2 = 2;
          }
          else {
            if (0xe < uVar4) {
              *pcVar5 = cVar1;
              *(undefined *)(param_1 + 0xd) = 0;
              *(undefined *)(param_1 + 0xe) = 0;
              return in_lr;
            }
            *pcVar5 = cVar1;
            uVar2 = 1;
          }
          *(undefined *)(param_1 + 0xd) = uVar2;
          *(undefined *)(param_1 + 0xe) = 0;
          return in_lr;
        }
        if ((*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54)) + 0x6000U < 0xc001) {
          uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
          DAT_0202e188 = uVar4 & 0x7fffffff;
          uVar4 = uVar4 * 2 >> 0x11 & 3;
          uVar2 = (undefined)uVar4;
          if (uVar4 == 0) {
            *pcVar5 = cVar1;
            uVar3 = 1;
LAB_08076fe4:
            *(undefined *)(param_1 + 0xd) = uVar3;
            *(undefined *)(param_1 + 0xe) = uVar2;
            return in_lr;
          }
          if (uVar4 != 1) {
            uVar2 = 0;
            *pcVar5 = cVar1;
            uVar3 = 2;
            goto LAB_08076fe4;
          }
          goto LAB_08076eee;
        }
        uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar4 & 0x7fffffff;
        uVar4 = uVar4 * 2 >> 0x11 & 1;
        uVar2 = (undefined)uVar4;
        if (uVar4 == 0) goto LAB_0807701c;
        uVar2 = 0;
        *pcVar5 = cVar1;
        *(undefined *)(param_1 + 0xd) = 1;
      }
    }
    *(undefined *)(param_1 + 0xe) = uVar2;
  }
  else {
    *(undefined *)(param_1 + 0xb8) = *(undefined *)(param_1 + 0xd);
    uVar2 = 5;
LAB_08076f02:
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

